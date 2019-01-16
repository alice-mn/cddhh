
/**
 * This file is part of Nokia OMAF implementation
 *
 * Copyright (c) 2018-2019 Nokia Corporation and/or its subsidiary(-ies). All rights reserved.
 *
 * Contact: omaf@nokia.com
 *
 * This software, including documentation, is protected by copyright controlled by Nokia Corporation and/ or its
 * subsidiaries. All rights are reserved.
 *
 * Copying, including reproducing, storing, adapting or translating, any or all of this material requires the prior
 * written consent of Nokia.
 */
#pragma once

#include "DashProvider/NVRDashAdaptationSetExtractor.h"


OMAF_NS_BEGIN

    class DashAdaptationSetExtractorMR : public DashAdaptationSetExtractor
    {
    public:
        DashAdaptationSetExtractorMR(DashAdaptationSetObserver& observer);

        virtual ~DashAdaptationSetExtractorMR();

    public: // from DashAdaptationSet
        virtual Error::Enum startDownloadFromSegment(uint32_t& aTargetDownloadSegmentId, uint32_t aNextToBeProcessedSegmentId, uint32_t aExpectedPingTimeMs);
        virtual Error::Enum stopDownloadAsync(bool_t aReset, DashAdaptationSetExtractorMR* aNewAdaptationSet);
        virtual const FixedArray<VASTileViewport*, 32> getCoveredViewports() const;
        virtual bool_t processSegmentDownload();
        virtual uint32_t getLastSegmentId() const;
        virtual bool_t isEndOfStream();

    public: // new
        virtual bool_t hasSupportingSet(uint32_t aId);
        virtual void_t switchToThis(uint32_t aSegmentId);
        virtual void_t switchingToAnother();
        virtual void_t switchedToAnother();
        virtual bool_t isDone(uint32_t& aSegment);
        virtual bool_t canConcatenate();
        virtual bool_t readyToSwitch(uint32_t aNextNeededSegment);
        virtual void_t updateProgressDuringSwitch(uint32_t aNextSegmentToBeProcessed);
        virtual bool_t segmentAvailable(uint32_t aSegmentId, DashAdaptationSetExtractorMR* aNewAdaptationSet);

    protected: // from DashAdaptationSet
        virtual DashRepresentation* createRepresentation(DashComponents aDashComponents, uint32_t aInitializationSegmentId, uint32_t aBandwidth);
        virtual bool_t parseVideoQuality(DashComponents& aNextComponents, uint8_t& aQualityIndex, bool_t& aGlobal, DashRepresentation* aLatestRepresentation);

    private:
        bool_t mIsInUse;    //vs is preparing
    };
OMAF_NS_END
